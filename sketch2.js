function initialScreen() {
	textSize(32);
	fill(0,0,0);
	stroke(0,0,0);
	text("PRESSIONE ESPAÇO PARA INICIAR",220,250);
	textSize(10);
	text("UP",393,330);
	text("DOWN",434,330);
	text("LEFT",487,330);
	text("RIGHT",535,330);
	stroke(0,0,0);
	fill("blue");
	ellipse(400,300,30);
	fill("yellow");
	ellipse(450,300,30);
	fill("red");
	ellipse(500,300,30);
	fill("green");
	ellipse(550,300,30,30);
	//ellipse(50,75,30,30);
	//ellipse(950,425,30,30);
}

function sorteio() {
    var circle = {
        cor: Math.floor(Math.random() * 4) + 1, 
        tempo: Math.floor(Math.random() * 4) + 2,
        posicaoX: Math.floor(Math.random() * 900) + 50,
        posicaoY: Math.floor(Math.random() * 350) + 75
    }

    return circle;
	  // Cores de 1 a 4
	 // Tempo de 1 a 5 segundos
	 // Coordenada x da bola de 50 a 950
     // Coordenada y da bola de 75 a 425
}

function showCircle(circle){
	stroke(0,0,0);
    if(circle.cor == 1){                                   // se cor = 1, então circulo azul.
		fill("blue");
        ellipse(circle.posicaoX, circle.posicaoY, 30);
    }
    else if(circle.cor == 2){
		fill("yellow");
        ellipse(circle.posicaoX, circle.posicaoY, 30);
    }
    else if(circle.cor == 3){
		fill("red");
        ellipse(circle.posicaoX, circle.posicaoY, 30);
    }
    else{
		fill("green");
        ellipse(circle.posicaoX, circle.posicaoY, 30);
    }
}

function gameStarted(){
    sorteio();
    showCircle();       
 }
           
function setup() {
	podeApertar = false;
	fezSorteio = false;
	countMenu = 0;
	fezEspera = false;
	primeiraMedida = true;
    //sort = 0;
	createCanvas(1000, 512); 
	//frameRate(60);
}

function draw() {
	background(200);
	fill(0,0,0);
	noStroke();
	if (keyIsDown(32)) {
		countMenu++;
	}
	if (countMenu == 0) {
		initialScreen();
	} else {
		if (fezSorteio == false) {
			circleShown = sorteio();
			fezSorteio = true;
		}
		alive = true;
        if (alive == true && fezEspera == true) {
			showCircle(circleShown);
			podeApertar = true;
			if(primeiraMedida){
				inicio = new Date();
				i = inicio.getTime();
				primeiraMedida = false;
				console.log("(i): ", i);
			}
		}
		if (fezEspera == false){
			setTimeout(function(){
				fezEspera = true;
			}, circleShown.tempo*1000);
		}
		if (podeApertar == true) {
			if(keyIsDown(27)){  //caso aperte esc, retorna para a página inicial
				countMenu = 0;
				alive = false;
				fezSorteio = false;
				podeApertar = true; 
				fezEspera = false;
			}
			if(keyIsDown(UP_ARROW)){
				fim = new Date();
				f = fim.getTime();
				dif = f - i;
				console.log("(f): ", f);
				console.log("(i): ", i);
				console.log("f-i: ", f-i);
				//alert(dif);
			}
        }
 
    }
} 