class LowArray {
	private long[] a;	// refer to array a

	// Constructor
	public LowArray(int size) {
		a = new long[size];
	}

	public void setElem(int index, long value) {
		a[index] = value;
	}

	public long getElem(int index) {
		return a[index];
	}

}

class LowArrayApp {
	public static void main(String[] args) {
		LowArray arr;
		arr = new LowArray(100);
		int nElems = 0;
		int j;

		arr.setElem(0, 55);
		arr.setElem(1, 42);
		arr.setElem(2, 23);
		arr.setElem(3, 11);
		arr.setElem(4, 1);
		arr.setElem(5, 2);
		arr.setElem(6, 69);
		arr.setElem(7, 71);
		arr.setElem(8, 29);
		arr.setElem(9, 12);
		nElems = 10;

		for(j=0; j<nElems; j++) {
			System.out.print(arr.getElem(j)+" ");
		}
		System.out.println("");

		int searchKey = 23;
		for(j=0; j<nElems; j++) {
			if(arr.getElem(j) == searchKey) {
				break;
			}
		}

		if(j == nElems) {
			System.out.println("Can't find "+searchKey);
		}
		else {
			System.out.println("Found "+searchKey);
		}

	}
}
