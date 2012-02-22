# Git Not Detecting Remote During `git pull`

## Error Message

**You asked me to pull without telling me which branch you want to merge with, and 'branch.master.merge' in your configuration file does not tell me, either. Please specify which branch you want to use on the command line and try again.**

## Fix

**Edit**

```
/repo/.git/config
```

**With the changes**

```
[branch "master"]
  remote = origin
  merge = refs/heads/master
```