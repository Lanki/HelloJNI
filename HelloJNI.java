public class HelloJNI {
	native void printHello();
	native void printString(String str);

	static {
		System.loadLibrary("hellojni");
	}

	public static void main(String[] args){
		HelloJNI myHelloJNI = new HelloJNI();
		
		myHelloJNI.printHello();
		myHelloJNI.printString("Hello world from printString fun");
	}
}
