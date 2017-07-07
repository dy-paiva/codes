import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';

import { AppRoutes }    from './app.routes';
import { AppComponent } from './app.component';

import { PublicModule } from './_public/public.module'

@NgModule({
  imports: [
    BrowserModule,

    PublicModule,

    AppRoutes
  ],
  providers: [],
  declarations: [ AppComponent ],
  bootstrap: [ AppComponent ]
})
export class AppModule {}
