
## Deploying Flask app to Production


### Prerequisites

```sh
$ sudo pip install flask
$ sudo pip install uwsgi
```

### Socket Server

- index is the flask server file (index.py - `app.run()`) 

```sh
$ uwsgi -s /tmp/uwsgi.sock -w index:app  --chmod-socket=666
```

### Nginx Config

- @app here is the app class that runs flask

```nginx
server {
    listen       80; 
    server_name  _;  
    location / { try_files $uri @app; }
    location @app {
      include uwsgi_params;
      uwsgi_pass unix:/tmp/uwsgi.sock;
    }   
}
```
