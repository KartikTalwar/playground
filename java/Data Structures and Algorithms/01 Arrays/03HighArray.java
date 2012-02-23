class HighArray {
	private long[] a;
	private int nElems;

	public HighArray(int max) {
		a = new long[max];
		nElems = 0;
	}

	public boolean find(long searchKey) {
		int j;
		for(j=0; j<nElems; j++) {
			if(a[j] == searchKey) {
				break;
			}
		}

		if(j == nElems) {
			return false;
		}
		else {
			return true;
		}
	} // find


	public void insert(long value) {
		a[nElems] = value;
		nElems++;
	}

	public boolean delete(long value) {
		int j;

		for(j=0; j<nElems; j++) {
			if(value == a[j]) {
				break;
			}
		}
		if(j == nElems) {
			return false;
		}
		else {
			for(int k=j; k<nElems; k++) {
				a[k] = a[k+1];
			}
			nElems--;
			return true;
		}
	} // delete


	public void display() {
		for(int j=0; j<nElems; j++) {
			System.out.println(a[j]+" ");
		}
		System.out.println("");
	}
}


class HighArrayApp {
	public static void main(String[] args) {
		int maxSize = 100;
		HighArray arr;
		arr = new HighArray(maxSize);

		arr.insert(42);
		arr.insert(23);
		arr.insert(7);
		arr.insert(69);
		arr.insert(29);
		arr.insert(2);

		arr.display();	// display the array

		int searchKey = 35;
		if(arr.find(searchKey)) {
			System.out.println("Found " + searchKey);
		}
		else {
			System.out.println("Could not find "+searchKey);
		}

		arr.delete(29);
		arr.delete(23);

		arr.display();
	}
}
