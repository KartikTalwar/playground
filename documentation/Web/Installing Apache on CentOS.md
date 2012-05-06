# Installing Apache on CentOS


## HTTPD

```
$ yum install httpd
$ yum install mysql mysql-server
$ yum install php php-mysql
```

## Enabling `mod_rewrite`

- Open ` /etc/httpd/conf/httpd.conf`
- Scroll down to ` <Directory “/var/www/html”>`
- Change `AllowOveride None` to `AllowOveride All`


## Starting the services

```
$ service httpd start
$ service mysqld start
```

```
$ ntsysv
```

- Check `httpd` and `mysqld` and press OK


## Setting up mysql

```
$ /usr/bin/mysqladmin -u root password 'new-password'
```