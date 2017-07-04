import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';

import { AppComponent } from './app.component';
import { PeopleComponent } from './people/person.component';

@NgModule({
  imports: [
    BrowserModule,
  ],
  declarations: [
    AppComponent,
    PeopleComponent
  ],
  providers: [],
  exports: [ AppComponent ],
  bootstrap: [AppComponent]
})
export class AppModule { }
