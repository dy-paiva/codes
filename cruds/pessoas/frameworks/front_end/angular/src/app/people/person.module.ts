import { CommonModule } from '@angular/common'
import { FormsModule } from '@angular/forms'
import { NgModule } from '@angular/core';

import { PeopleRoutes }    from './person.routes';
import { PeopleComponent } from './person.component';

@NgModule({
  imports: [
    CommonModule,
    FormsModule,

    PeopleRoutes
  ],
  providers: [],
  declarations: [ PeopleComponent ],
  bootstrap: []
})
export class PeopleModule { }
