
class Timer(object):

  def __init__(self, verbose=True):
    self.verbose = verbose

  def __enter__(self):
    self.start = time.time()
    return self

  def __exit__(self, *args):
    self.end = time.time()
    self.secs = self.end - self.start
    self.msecs = self.secs * 1000

    if self.verbose:
      print 'Elapsed time: %f ms' % self.msecs


if __name__ == '__main__':

  with Timer() as t:
      map(lambda x: x*x*x, [3245]*12345)
