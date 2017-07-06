class PeopleController < ApplicationController
  def index
    render json: { items: Person.all.map(&:to_obj) }, status: :ok
  end

  def create
    attrs = get_params

    person = Person.new(attrs)
    if person.save
      render json: { item: person.to_obj }, status: :ok
    else
      render json: { errors: person.errors.full_messages }, status: :bad_request
    end
  end
end
