class Calc(object):
	"""docstring for Calc"""
	def __init__(self, arg):
		super(Calc, self).__init__()
		self.arg = arg
	def addition(self, a, b):
		self.a = a
		self.b = b
		c = a + b