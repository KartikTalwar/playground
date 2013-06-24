class DictObject(dict):

  def __getattr__(self, k):
        return self[k]

  def __setattr__(self, k, v):
    return self[k]


obj = DictObject({'key' : 'value})
print obj.key
