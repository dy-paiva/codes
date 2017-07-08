import { Http }       from '@angular/http';
import { Injectable } from '@angular/core';

import { Observable } from 'rxjs/Observable';
import 'rxjs/add/operator/map';
import 'rxjs/add/operator/do';
import 'rxjs/add/operator/catch';
import 'rxjs/add/operator/toPromise';

import { Person } from './shared/person'

@Injectable()
export class PersonService {
  private peopleUrl = 'http://localhost:8000/people';  // URL to web api

  constructor(private http: Http) {}

  getPeople(): Observable<Person[]> {
    var resquest = this.http.get(this.peopleUrl)
    return resquest.map( response => response.json().items )
  }

  private handleError(error: any): Promise<any> {
    console.error('An error occurred', error);
    return Promise.reject(error.message || error);
  }
}
