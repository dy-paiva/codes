export class Person {
  id:   number;
  name: string;

  errors: string[];

  valid() {
    this.errors = []

    if (this.name == '') this.errors.push('Nome não pode ser vazio')

    return (this.errors.length == 0)
  }
}
