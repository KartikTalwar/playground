class ArraySelection {
	private long[] a;
	private int nElems;

	public ArraySelection(int max) {
		a = new long[max];
		nElems = 0;
	}

	public void insert(long value) {
		a[nElems] = value;
		nElems++;
	}

	public void display() {
		for(int i=0; i<nElems; i++) {
			System.out.println(a[i] + " ");
		}
		System.out.println("");
	}

	public void selectionSort() {
		int i, j, min;

		// outer loop
		for(i=0; i<nElems-1; i++) {
			min = i;	// minimum

			// inner loop
			for(j=i+1; j<nElems; j++) {
				// if min is greater
				if( a[j] < a[min] ) {
					min = i;	// assign a new min
					swap(j, min);	// then swap
				}
			}
		}
	} // selection sort

	public void swap(int x, int y) {
		long temp;

		temp = a[x];
		a[x] = a[y];
		a[y] = temp;
	}
}

class SelectionSortApp {
	public static void main(String[] args) {
		int maxSize = 100;
		ArraySelection arr;
		arr = new ArraySelection(maxSize);

		arr.insert(77);
		arr.insert(42);
		arr.insert(1);
		arr.insert(34);
		arr.insert(23);
		arr.insert(5);
		arr.insert(5);
		arr.insert(0);
		arr.insert(-2);
		arr.insert(19);
		arr.insert(18);

		arr.display();

		arr.selectionSort();

		arr.display();
	}
}
