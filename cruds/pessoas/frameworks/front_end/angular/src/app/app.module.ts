import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';

import { AppComponent } from './app.component';
import { PeopleComponent } from './people/person.component';

import { routing } from './app.routes';

@NgModule({
  imports: [
    BrowserModule,
    routing,
  ],
  declarations: [
    AppComponent,
    PeopleComponent
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
