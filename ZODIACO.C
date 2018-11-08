#include<stdio.h>
#include<conio.h>
main()
{
int D;
int M;
char*Z;
char*P;
textbackground(7);
textcolor(0);
clrscr();
printf("\n\nel dia de nacimiento:");
scanf("%d",&D);
printf("\n\nel mes de nacimiento:");
scanf("%d",&M);
if(M==1)
{
if((D>=21)&&(D<=31))
{
Z="Acuario";
P="Tienes claro que no vas a dejar que tus dias no sean en una rutina aburrida con la que tienes que vivir por ello, debes marcar la diferencia dia a dia.\n No creas que todo lo que te va mal en la vida es culpa tuya , mira a tu al rededor, tienes demasiadas cargas por las cuales debes lidiar.\n Entregate a una relacion con esa persona no te ha costado nada por que tienes que estar con el ya que te hace feliz y te sientes bien a su lado.";
}
else
{
Z="Capricornio";
P="Hoy, alguien que fue tu amigo va a entrar a tu vida, pero despues de lo que te hizo te sera imposible darle otra oportunidad.\n Has estado callandote de tus opiniones por demasiado tiempo y eso es algo que no debes de dejar a unj lado y sobre todo en tu trabajo. A partir de ahora seras lo mas sincero con los demas.\n Tu pareja y tu llevan mucho tiempo juntos y por eso es que se conocen bien. Tu mismo sabes perfectamente lo que tienes que hacer para hacerla sonreir.";
}
}
else
{
if(M==2)
{
if(D<=18)
{
Z="Acuario";
P="Tienes claro que no vas a dejar que tus dias no sean en una rutina aburrida con la que tienes que vivir por ello, debes marcar la diferencia dia a dia.\n No creas que todo lo que te va mal en la vida es culpa tuya , mira a tu al rededor, tienes demasiadas cargas por las cuales debes lidiar.\n Entregate a una relacion con esa persona no te ha costado nada por que tienes que estar con el ya que te hace feliz y te sientes bien a su lado.";
}
else
{
Z="Piscis";
P="No  vas a dejar que nadie te diga cosas que no puedes alcanzar las cosas que tu deseas, enseñales, tu eres una persona fuerte, solo te falta mas constancia para conseguir lo que deseas.\n Ciertas personas en el mundo laboral cren que pueden pasar por encima de ti sin que haya consecuencias, en cambio tu les vas a enseñar lo contrario.\n con comunicacion y esfuerzo, tu y tu pareja han conseguido una relacion que sea como exactamente los dos pensaban al inicio que fuera cuando comenzaron estando juntos.";
}
}
else
{
if(M==3)
{
if(D<=20)
{
Z="Piscis";
P="No  vas a dejar que nadie te diga cosas que no puedes alcanzar las cosas que tu deseas, enseñales, tu eres una persona fuerte, solo te falta mas constancia para conseguir lo que deseas.\n Ciertas personas en el mundo laboral cren que pueden pasar por encima de ti sin que haya consecuencias, en cambio tu les vas a enseñar lo contrario.\n con comunicacion y esfuerzo, tu y tu pareja han conseguido una relacion que sea como exactamente los dos pensaban al inicio que fuera cuando comenzaron estando juntos.";
}
else
{
Z="Aries";
P="Tienes muy claro lo que quieres en la vida y no vas a poarar hasta conseguirlo, llevas mucho tiempo luchando por ello y cada paso ha merecido la pena.\n Hay ciertos compañeros de trabajo que se estan pasando contigo, estan consiguiendo que te sientas incomodo donde estas. Deberias poner limites entre ellos y tu de una buena vez.\n El amor que hay en ti y en tu pareja lo puede todo, no importa los obstaculos que se les presenten, entre ambos lo superaran. ";
}
}
else
{
if(M==4)
{
if(D<=20)
{
Z="Aries";
P="Tienes muy claro lo que quieres en la vida y no vas a poarar hasta conseguirlo, llevas mucho tiempo luchando por ello y cada paso ha merecido la pena.\n Hay ciertos compañeros de trabajo que se estan pasando contigo, estan consiguiendo que te sientas incomodo donde estas. Deberias poner limites entre ellos y tu de una buena vez.\n El amor que hay en ti y en tu pareja lo puede todo, no importa los obstaculos que se les presenten, entre ambos lo superaran. ";
}
else
{
Z="Tauro";
P="Si sientes que tu cuerpo se esta estancando, deberias de ponerlo denuevo en movimiento con algo de deporte. Te sentiras mucho mejor haciendo el ejercicio que más te guste.\n Se estan aprovechando de ti en el trabajo y no debes de dejar que eso ocurra, demuestrales tus dotes de liderazgo ya que tu lo haras genial.\n Haz estado mucgho tiempo ocultandole secretos a tu pareja y no debes de dejar que eso ocurra o podra perjudir en su relacion.";
}
}
else
{
if(M==5)
{
if(D<=21)
{
Z="Tauro";
P="Si sientes que tu cuerpo se esta estancando, deberias de ponerlo denuevo en movimiento con algo de deporte. Te sentiras mucho mejor haciendo el ejercicio que más te guste.\n Se estan aprovechando de ti en el trabajo y no debes de dejar que eso ocurra, demuestrales tus dotes de liderazgo ya que tu lo haras genial.\n Haz estado mucgho tiempo ocultandole secretos a tu pareja y no debes de dejar que eso ocurra o podra perjudir en su relacion.";
}
else
{
Z="Geminis";
P="Deberias de aprender a organizarte mejor ,no dejar que la pereza pueda contigo.\n Hoy vas a tener que dejar tu el que guie a tus compañeros de trabajo, demuestrakle tus dotes de liderazgo, lo haras genial.\n Puede que tu relacion ya no sea como la que era al inicio, sin embargo no quiere decir que se haya hechado al drenaje, disfruta de ella.";
}
}
else
{
if(M==6)
{
if(D<=21)
{
Z="Geminis";
P="Deberias de aprender a organizarte mejor ,no dejar que la pereza pueda contigo.\n Hoy vas a tener que dejar tu el que guie a tus compañeros de trabajo, demuestrakle tus dotes de liderazgo, lo haras genial.\n Puede que tu relacion ya no sea como la que era al inicio, sin embargo no quiere decir que se haya hechado al drenaje, disfruta de ella. ";
}
else
{
Z="Leo";
P="Puede que las cosas no te resulten del todo bien ,pero no vas a dejar que los demas lo sepan siempre.\n Concentrate en tus obligaciones de trabajo que no te funcionan del todo y resuelvelas a como de costa ya que son demasiado importantes y no son para dejarlas despues.\Tu pareja es la unica que puede levantarte de lo malo que te esta sucediendo en la vida, deberias apoyarte de ella para que asi pueda influir de manera positivaen tu vida cotidiana.";
}
}
else
{
if(M==7)
{
if(D<=22)
{
Z="Cancer";
P="Necesitas comprender que es lo que quieres para asi dedicarle el tiempo suficiente y no estar perdiendo el tiempo en otras cosas no inecesarias que puedan afectar en tu vida.\n Tu relacion se ha deteriorado de una manera fatal, deberias revisar que son los errores de ella que es lo que de verdad sucede y corrigelas antes de que sea irreparable la situacion.";
}
else
{
Z="Leo";
P="Puede que las cosas no te resulten del todo bien ,pero no vas a dejar que los demas lo sepan siempre.\n Concentrate en tus obligaciones de trabajo que no te funcionan del todo y resuelvelas a como de costa ya que son demasiado importantes y no son para dejarlas despues.\Tu pareja es la unica que puede levantarte de lo malo que te esta sucediendo en la vida, deberias apoyarte de ella para que asi pueda influir de manera positivaen tu vida cotidiana.";
}
}
else
{
if(M==8)
{
if(D<=23)
{
Z="Leo";
P="Puede que las cosas no te resulten del todo bien ,pero no vas a dejar que los demas lo sepan siempre.\n Concentrate en tus obligaciones de trabajo que no te funcionan del todo y resuelvelas a como de costa ya que son demasiado importantes y no son para dejarlas despues.\Tu pareja es la unica que puede levantarte de lo malo que te esta sucediendo en la vida, deberias apoyarte de ella para que asi pueda influir de manera positivaen tu vida cotidiana.";
}
else
{
Z="Virgo";
P="Estas  en una epoca genial de tu vida,has aprendido a organiarte a la perfeccion para tener  tiempo  para todas tus actividades  que te hacen feliz cada dia  /(UuU)/";
}
}
else
{
if(M==9)
{
if(M<=23)
{
Z="Virgo";
P="Estas  en una epoca genial de tu vida,has aprendido a organiarte a la perfeccion para tener  tiempo  para todas tus actividades  que te hacen feliz cada dia  /(UuU)/";
}
else
{
Z="Libra";
P="Tienes muchas responsabilidades en tu vida y aunque a veces te sientes agobiado ,no saqbrias vivir sin nada  que hacer";
}
}
else
{
if(M==10)
{
if(D<=23)
{
Z="Libra";
P="Tienes muchas responsabilidades en tu vida y aunque a veces te sientes agobiado ,no sabrias vivir sin nada  que hacer";
}
else
{
Z="Escorpion";
P="Ciertas personas de tu entorno se han enterado de algo que  les estavas ocultando y te molesta no haber sido tu quien se los dijiera. has tenido muchas oportunidades.\n Aunque creas que tu trabajo ideal esta muy demasiado fuera de tu alcance no lo es del todo, solo falta que te lo propongas.\n Despues despues de todas las ilusiones que le habias puesto en tu ultima relacion que todo se haya ido al traste te dolera demasiado. No podras confiar en el.";
}
}
else
{
if(M==11)
{
if(D<=22)
{
Z="Escorpion";
P="Ciertas personas de tu entorno se han enterado de algo que  les estavas ocultando y te molesta no haber sido tu quien se los dijiera. has tenido muchas oportunidades.\n Aunque creas que tu trabajo ideal esta muy demasiado fuera de tu alcance no lo es del todo, solo falta que te lo propongas.\n Despues despues de todas las ilusiones que le habias puesto en tu ultima relacion que todo se haya ido al traste te dolera demasiado. No podras confiar en el.";
}
else
{
Z="Sagitario";
P="Has actuado de corazon  con esas personas ,por eso confian tanto en ti ,saben que eres alguien de fiar. Tener esa reputacion te abrira muhas puertas.\n Hay muchas personas en tu entorno laboral que no te valoran como de verdad te lo mereces, sin embargo solo estas esperando el momento a enseñarles todo lo contrario.\n No estas encontrando la forma correcta de solucionar las cosas con tu pareja y asi es imposible que esten felices juntos. Tienes que adaptarte.";
}
}
else
{
if(M==12)
{
if(D<=23)
{
Z="Sagitario";
P="Has actuado de corazon  con esas personas ,por eso confian tanto en ti ,saben que eres alguien de fiar. Tener esa reputacion te abrira muhas puertas.\n Hay muchas personas en tu entorno laboral que no te valoran como de verdad te lo mereces, sin embargo solo estas esperando el momento a enseñarles todo lo contrario.\n No estas encontrando la forma correcta de solucionar las cosas con tu pareja y asi es imposible que esten felices juntos. Tienes que adaptarte.";
}
else
{
Z="Capricornio";
P="Hoy, alguien que fue tu amigo va a entrar a tu vida, pero despues de lo que te hizo te sera imposible darle otra oportunidad.\n Has estado callandote de tus opiniones por demasiado tiempo y eso es algo que no debes de dejar a unj lado y sobre todo en tu trabajo. A partir de ahora seras lo mas sincero con los demas.\n Tu pareja y tu llevan mucho tiempo juntos y por eso es que se conocen bien. Tu mismo sabes perfectamente lo que tienes que hacer para hacerla sonreir.";
}
}
}
}
}
}
}
}
}
}
}
}
}
printf("\n\nEl signo zodiacal es :");
printf("\n%s",Z);
printf("\n\nLa prediccion zodiacal es :");
printf("\n%s",P);
return 0;
}
