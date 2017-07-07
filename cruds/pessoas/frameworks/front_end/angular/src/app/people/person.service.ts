import { Injectable }    from '@angular/core';
import { Http } from '@angular/http';

import 'rxjs/add/operator/toPromise';

@Injectable()
export class PersonService {
  private peopleUrl = 'http://localhost:8000/people.json';  // URL to web api

  constructor(private http: Http) {}

  getPeople() {
    this.http.get(this.peopleUrl).toPromise()
      .then( response => {
        const resp = response.json().data;
        console.log(resp);
      })
      .catch(e => this.handleError(e));
  }

  private handleError(error: any): Promise<any> {
    console.error('An error occurred', error);
    return Promise.reject(error.message || error);
  }
}
