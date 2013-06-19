import subprocess

def shell(command, stdout=True):
  if stdout:
    return subprocess.check_output(command, shell=True)
  return subprocess.check_call(command, shell=True)

print shell('ls')
