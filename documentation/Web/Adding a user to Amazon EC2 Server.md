# Adding a user to Amazon EC2 Server

## Login by default user

```
$ ssh -i generatedKey.pem ec2-user@xx.xx.xxx.xxx
```

## Create a new user

```
$ sudo adduser ktalwar
$ sudo su
$ passwd ktalwar
```

### Edit user privileges

```
$ sudo visudo
```

**Add this to the last line**

```
ktalwar   ALL = (ALL)    ALL
```

## Creating public and private keys

```
$ su ktalwar
$ cd /home/ktalwar
```

```
$ ssh-keygen -b 1024 -f ktalwar -t dsa
$ mkdir .ssh
$ chmod 700 .ssh
$ cat ktalwar.pub > .ssh/authorized_keys
$ chmod 600 .ssh/authorized_keys
$ sudo chown ktalwar:ec2-user .ssh
$ sudo chown ktalwar:ec2-user .ssh/authorized_keys
```

## Downloading your private key

```
$ sudo cp ktalwar /home/ec2-user/
$ sudo chmod 0777 /home/ec2-user/ktalwar
```

**On your local machine**

```
$ scp -i generatedKey.pem ec2-user@xx.xx.xxx.xxx:/home/ec2-user/ktalwar ktalwar.pem
```

**On EC2**

```
$ sudo rm /home/ktalwar/ktalwar
$ sudo rm /home/ktalwar/ktalwar.pub
$ sudo rm /home/ec2-user/ktalwar
```

## Test it out

```
$ ssh -i ktalwar.pem ktalwar@xx.xx.xxx.xxx
```
