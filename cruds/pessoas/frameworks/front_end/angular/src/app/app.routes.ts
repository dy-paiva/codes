import { Routes, RouterModule } from '@angular/core';

import { AppComponent } from './app/app.component';
import { PeopleComponent } from './people/person.component';

// Route Configuration
export const routes: Routes = [
  { path: '/', component: AppComponent },
  { path: 'people', component: PeopleComponent, data: { title: 'People' } },
];

export const routing: ModuleWithProviders = RouterModule.forRoot(routes);
