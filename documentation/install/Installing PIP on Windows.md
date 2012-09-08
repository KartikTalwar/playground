# Installing PIP on Windows

## 64 Bit System

### Downloading EasyInstall

- Download [ez_setup.py] (http://peak.telecommunity.com/dist/ez_setup.py)

- Navigate to python installation directory (eg. `C:\Python27\`)
- Go to folder `Tools\Scripts\` and move the file `ez_setup.py` there


### Installing EasyInstall

- Open command prompt: *Windows->Run->type 'cmd'->enter* 

- If Python is installed in Program Files and you are not the administrator, run this command to start the command prompt 
-  `Windows->run-> type 'runas /noprofile /user:Administrator cmd'`

**Run the following commands**

```
cd c:\Python27\ 
python Tools\Scripts\ez_setup.py
cd Scripts
easy_install pip
```

## Using PIP

**Open the command prompt and execute**

```
cd c:\Python27\Scripts
pip install packageName
```

