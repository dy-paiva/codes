class PeopleController < ApplicationController
  def index
    render json: { items: Person.all.map(&:to_obj) }, status: :ok
  end

  def create
    attrs = get_params(:people)

    person = Person.new(attrs)
    if person.save
      render json: { person: person.to_obj }, status: :ok
    else
      render json: { errors: person.errors.full_messages }, status: :bad_request
    end
  end

  def get_params(key=nil)
    parm = params.deep_symbolize_keys
    parm = parm[key.to_s.to_sym] unless key.blank?

    attrs_key = %i(name)

    parm.slice(*attrs_key)
  end
end
