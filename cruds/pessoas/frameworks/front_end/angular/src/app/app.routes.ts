import { ModuleWithProviders }  from '@angular/core';
import { Routes, RouterModule } from '@angular/router';

// Route Configuration
export const routes: Routes = [
  { path: 'people', loadChildren: './people/person.module#PeopleModule' },
];

// Route Configuration
export const AppRoutes: ModuleWithProviders = RouterModule.forRoot(routes);
