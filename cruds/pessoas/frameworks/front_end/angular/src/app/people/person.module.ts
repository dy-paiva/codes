import { NgModule } from '@angular/core';

import { PeopleRoutes }    from './person.routes';
import { PeopleComponent } from './person.component';

@NgModule({
  imports: [
    PeopleRoutes
  ],
  providers: [],
  declarations: [ PeopleComponent ],
  bootstrap: []
})
export class PeopleModule { }
