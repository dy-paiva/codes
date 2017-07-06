import { ModuleWithProviders }  from '@angular/core';
import { Routes, RouterModule } from '@angular/router';

import { NotFoundComponent } from './_public/404_component'

// Route Configuration
export const routes: Routes = [
  { path: '',   redirectTo: 'people', pathMatch: 'full' },
  { path: 'people', loadChildren: './people/person.module#PeopleModule' },

  { path: '**', component: NotFoundComponent },
]

// Route Configuration
export const AppRoutes: ModuleWithProviders = RouterModule.forRoot(routes);
