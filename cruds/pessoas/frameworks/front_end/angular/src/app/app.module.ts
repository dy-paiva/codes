import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';

import { AppRoutes }    from './app.routes';
import { AppComponent } from './app.component';

@NgModule({
  imports: [
    BrowserModule,

    AppRoutes
  ],
  providers: [],
  declarations: [ AppComponent ],
  bootstrap: [ AppComponent ]
})
export class AppModule { }
