class OrdArray {
	private long[] a;
	private int nElems;

	public OrdArray(int max) {
		a = new long[max];
		nElems = 0;
	}

	public int size() {
		return nElems;
	}

	// linear search
	public int find(long searchKey) {
		int lowerBound = 0;
		int upperBound = nElems-1;
		int curIn;

		while(true) {
			curIn = (lowerBound+upperBound)/2;
			if(a[curIn] == searchKey) {
				return curIn;
			}
			else if(lowerBound > upperBound) {
				return nElems;
			}
			else {
				if(a[curIn] < searchKey) {
					lowerBound = curIn+1;
				}
				else {
					upperBound = curIn-1;
				}
			}
		}
	} // find


	public void insert(long value) {
		int i;
		for(i=0; i<nElems; i++) {
			if(a[i] > value) {
				break;
			}
		}

		for(int j=nElems; j>i; j--) {
			a[j] = a[j-1];
		}
		a[i] = value;
		nElems++;
	} // insert


	public boolean delete(long value) {
		int i = find(value);
		if(i == nElems) {
			return false;
		}
		else {
			for(int j=i; j<nElems; j++) {
				a[j] = a[j+1];
			}
			nElems--;
			return true;
		}
	} // delete


	public void display() {
		for(int i=0; i<nElems; i++) {
			System.out.println(a[i]+" ");
		}
		System.out.println("");
	}

}

class OrderedApp {
	public static void main(String[] args) {
		int maxSize = 100;
		OrdArray arr;
		arr = new OrdArray(maxSize);

		arr.insert(42);
		arr.insert(23);
		arr.insert(29);
		arr.insert(2);
		arr.insert(12);
		arr.insert(17);
		arr.insert(7);
		arr.insert(69);

		int searchKey = 23;
		if(arr.find(searchKey) != arr.size() ) {
			System.out.println("Found "+searchKey);
		}
		else {
			System.out.println("Cant find "+searchKey);
		}

		arr.display();

		arr.delete(23);
		arr.delete(69);

		arr.display();

	}
}
