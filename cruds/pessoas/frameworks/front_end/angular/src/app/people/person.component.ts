import { Component } from '@angular/core';

@Component({
  selector: 'app-people',
  templateUrl: './person.component.html'
})
export class PeopleComponent {
  personCtrl = {
    list: [
      { nome: 'Diego Felipe' }
    ],
    add: function(newVal){
      if (newVal.value == '') { return }

      this.list.push({nome: newVal.value});
      newVal.value = '';
    }
  };
}
