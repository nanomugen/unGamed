
object teste{
	def main(args: Array[String]): Unit = {
		val teste = new chart("Lalala",10,11,12,13,1)
		println(teste)
	}
def Job(x:Int):String = {
	val y = List("FIGHTER", "WIZARD", "HEALER")
	return y(x)
}
//val job_list = list("FIGHTER", "WIZARD", "HEALER")
class chart(n:String,a:Int,d:Int,h:Int,m:Int,j:Int){
	var name = n
	var attk=a;
	var defn=d;
	var hp=h;
	var mp=m;
	var job=j;
	override def toString = "Name> "+name+"\nJob> "+ Job(job) +"\nHp> "+hp+"\n"


}
}
