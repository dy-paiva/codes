import { Component, OnInit } from '@angular/core';

import { PersonService } from './person.service'

import { Person } from './shared/person'

@Component({
  selector: 'app-people',
  templateUrl: './person.component.html',
  providers: [ PersonService ],
})
export class PeopleComponent implements OnInit {
  constructor(private personService: PersonService) { }

  ngOnInit() {
    this.personCtrl.loading = true

    this.personService.getPeople().subscribe( list => {
      this.personCtrl.list    = list
      this.personCtrl.loading = false
    })
  }

  personCtrl = {
    list: [],
    _this: this,
    loading: false,
    addPerson: function(newVal){
      if (newVal.value == '') return

      var person = new Person()
      person.name = newVal.value
      if (!person.valid()) { alert(person.errors); return }

      this.loading = true

      this._this.personService.createPeople(person).subscribe( data => {
        this.list.push(data);
        this.loading = false
        newVal.value = '';
      })
    }
  };
}
