import { CommonModule } from '@angular/common'
import { FormsModule } from '@angular/forms'
import { HttpModule } from '@angular/http';

import { NgModule } from '@angular/core';

import { PeopleRoutes }    from './person.routes';
import { PeopleComponent } from './person.component';

@NgModule({
  imports: [
    CommonModule,
    FormsModule,
    HttpModule,

    PeopleRoutes,
  ],
  providers: [],
  declarations: [ PeopleComponent,  ],
  bootstrap: []
})
export class PeopleModule { }
