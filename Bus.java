package game;

class Buss extends Thread{

	/*public BusTest(String this.getName()){this.this.getName() = this.getName();}*/

	private int k = (int)(4*Math.random());
	private int seat = 10;
	public void run(){

		synchronized(this){

			
			for(int i=1;i<=4;i++) {
			if((seat-k)<0){try {

			System.out.println("--------------------------------");

			System.out.println(Thread.currentThread( ).getName( )+"가 들어왔음.");

			System.out.println("가능한 좌석수 : "+ seat +"요청좌석수 : "+ k);

			System.out.println("좌석예약이 불가능합니다.");

			System.out.println(Thread.currentThread( ).getName( )+"가 나갑니다.");

			System.out.println("--------------------------------"); 
			this.notify();
			this.wait();break;
			}catch(InterruptedException e){ 
                e.printStackTrace( ); }}

			else try {Busseat(k);
			System.out.println("--------------------------------");

				System.out.println(Thread.currentThread( ).getName( )+"가 들어왔음.");

				System.out.println("가능한 좌석수 : "+ seat +"요청좌석수 : "+ k);

				System.out.println(k +" 좌석이 예약되었음.");

				System.out.println(Thread.currentThread( ).getName( )+"가 나갑니다.");

				System.out.println("--------------------------------");

				this.notify(); 
				this.wait();
			}catch(InterruptedException e){ 
                e.printStackTrace( ); }
			}
		}

		}	

	

	public void Busseat(int s){

		seat -= s;}

	public int seat(){return seat;}

}

 

 

public class Bus {

			public static void main(String[] args){

				Buss t = new Buss();
				
				Thread t2 = new Thread(t,"Thread-1");
				Thread t1 = new Thread(t,"Thread-0");
				Thread t3 = new Thread(t,"Thread-2");

						

				t1.start();

				t2.start();

				t3.start();

			}

}

 