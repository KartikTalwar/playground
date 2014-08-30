import functools

def my_check(func):

  @functools.wraps(func)
  def decorated_view(*args, **kwargs):
    if 1 != 2:
      return 'failure'
    return func(*args, **kwargs)

  return decorated_view


if __namae__ == '__main__':

  @my_check
  def hello():
    return 'success'
