class Person < ApplicationRecord
  validates :name, presence: true

  def to_obj
    { id: id, name: name }
  end
end
