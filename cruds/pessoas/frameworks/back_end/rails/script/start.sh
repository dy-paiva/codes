#! bin/bash

# exec bundle pending
bundle check || bundle install

# remove server.pid
rm -f /pessoaApp/tmp/pids/server.pid

# start server
bundle exec rails s -p 3000 -b 0.0.0.0
