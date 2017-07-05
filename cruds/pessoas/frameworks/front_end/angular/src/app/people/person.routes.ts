import { ModuleWithProviders }  from '@angular/core';
import { Routes, RouterModule } from '@angular/router';

import { PeopleComponent } from './person.component';

const routes: Routes = [
  { path: '', component: PeopleComponent },
];

// Route Configuration
export const PeopleRoutes: ModuleWithProviders = RouterModule.forChild(routes);
