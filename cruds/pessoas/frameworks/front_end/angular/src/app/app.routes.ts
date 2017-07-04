import { ModuleWithProviders }  from '@angular/core';
import { Routes, RouterModule } from '@angular/router';

import { PeopleComponent } from './people/person.component';

// Route Configuration
export const routes: Routes = [
  { path: 'people', component: PeopleComponent },
];

// Route Configuration
export const routing: ModuleWithProviders = RouterModule.forRoot(routes);
