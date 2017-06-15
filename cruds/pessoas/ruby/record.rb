# ----------------------------------------------------------------
#  Gerenciador de Records
# ----------------------------------------------------------------

class Record
  def self.table_name
    tn = self.name.gsub(/::/, '/')
    tn = tn.gsub(/([A-Z]+)([A-Z][a-z])/,'\1_\2')
    tn = tn.gsub(/([a-z\d])([A-Z])/,'\1_\2')
    tn = tn.tr("-", "_").downcase

    "#{tn}s"
  end

  def self.all
    list = []

    file = get_file
    file.each_line do |line|
      next if line =~ /^(\/\/)/

      obj = {}
      items = line.split('; ')
      items.each do |item|
        key, value = item.split(': ')
        obj[key] = value.gsub("\n", '')
      end
      list.push(obj)
    end
    file.close

    list
  end

  def self.create(*items)
    file = get_file
    keys = file.read.split("\n")[1].gsub('//', '').split('; ').map(&:strip)

    lines = []
    items.each do |item|
      line = []
      item.each do |key, value|
        k = keys.find{ |k| k == key.to_s }
        fail "Não existe a chave #{key} na table #{table_name}" if k.nil?
        line << "#{k}: #{value}"
      end

      lines.push line.join('; ')
    end

    lines.each do |line|
      file.puts line
      file.close
    end
  end

  # private

  def self.get_file
    File.open("../../_records/#{table_name}.txt", "a+")
  end
  private_class_method :get_file
end
