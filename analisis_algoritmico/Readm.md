## Analisis y Complejidad Algoritmica by Diego Alba

Se verán distintos comandos comunes de Java y su complejidad algoritmica, en algunos casos se les asignarán valores unitarios que estan comentados entre parentésis al lado de cada comando, al igual que en pocos casos se verá su complejidad algoritmica respecto a T(n) y O(n), donde se verán:
- Asignaciones
- Operadores
- Condicionales
- Ciclos
- Búsquedas
- While
- Recursividad

##### Asignaciones
```java
int tests = 1;    		// (1)
```
##### Operadores
```java
a + 2;    		// (1)
a * 2;     		// (1)
a++;     		// (2)
pow(2,3);  	// (2)
```
##### Condicionales
En el segundo caso donde existe "else", se elige la opcion de mayor unidad

```java
if(a>b){	//(2)
	a++;		//(2)      			Total(6)
	a--;		  //(2)
}   

if(a>b){	//(2)
	a++;		//(2)     
	} else {								//Maximo(6)
	a++;		  //(2)
	b--;		   //(2) 
}   
```
##### For
```java
for ( i=0; i<n; i++){		// (4*n + x)
. . .
. . .		//(x)
. . . 
}
```
> T(n) = 4n + x
> O(n) = n

##### Búsquedas
###### Busqueda lineal
```java
for ( i=0; i<n; i++){
	if (nombre[i] == "Diego Alba"){
		return true;
	} else {
		return false;
	}
}
```
> O(n) = n

###### Busqueda binaria
```java
for ( ini=0, fin = n; ini<final; ){
	mid = (ini + fin) / 2;
	if (nombre[mid] == "Diego Alba"){
		return true;
	} else if (nombre[mid] > "Diego Alba"){
		fin = mid;
	} else{
		ini = mid;
	}
}
```
##### While
```java
int i=0;
while(i<n){
	print(i);
	i++;
}
```
>O(n) = n

```java
a=1;
while(a>n){
	print(a);
	print(n);
	a=a*2;
}
```
>O(n) = log<sub>2</sub>(n)

```java
int i=1;
intk=1;
while(k<n){
	k = k+i;
	i++;
	print(k);
}
```
>O(n) = <sub>$$\sqrt{n}$$</sub>

##### Recursividad
```java
int i=0;
f (int a, int b) {
	if (i == b) {
		return 1;
	} else {
		return a * f(a, b, i + 1)
	}
}
```

### Fin