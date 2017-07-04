import { PessoaAppPage } from './app.po';

describe('pessoa-app App', () => {
  let page: PessoaAppPage;

  beforeEach(() => {
    page = new PessoaAppPage();
  });

  it('should display message saying app works', () => {
    page.navigateTo();
    expect(page.getParagraphText()).toEqual('app works!');
  });
});
