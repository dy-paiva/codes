FROM ruby:2.4.1

RUN apt-get update -qq && apt-get install -y build-essential libpq-dev redis-server imagemagick locales locales-all && apt-get install -y postgresql-client

ENV erp /pessoaApp

RUN mkdir $erp
WORKDIR $erp

ADD Gemfile* $erp/

RUN bundle install

RUN locale-gen en_US.UTF-8
RUN locale-gen en en_US en_US.UTF-8

ENV LANG en_US.UTF-8
ENV LANGUAGE en_US:en
ENV LC_ALL en_US.UTF-8

ADD . $erp
