import { Component } from '@angular/core';

import { PersonService } from './person.service'

@Component({
  selector: 'app-people',
  templateUrl: './person.component.html',
  providers: [ PersonService ],
})
export class PeopleComponent {
  constructor(private personService: PersonService) { }

  personCtrl = {
    list: this.personService.getPeople(),
    add: function(newVal){
      if (newVal.value == '') { return }

      this.list.push({nome: newVal.value});
      newVal.value = '';
    }
  };
}
