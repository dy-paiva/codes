FROM node:6-alpine

RUN apk update \
  && apk add --update alpine-sdk \
  && npm install -g @angular/cli@1.1.3 \
  && ng set --global packageManager=yarn \
  && apk del alpine-sdk \
  && rm -rf /tmp/* /var/cache/apk/* *.tar.gz ~/.npm \
  && npm cache clear \
  && sed -i -e "s/bin\/ash/bin\/sh/" /etc/passwd

ENV erp /pessoa-app

RUN mkdir $erp
WORKDIR $erp

ADD . $erp

RUN npm install
