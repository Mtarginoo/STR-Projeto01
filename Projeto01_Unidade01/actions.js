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
}

function sorteio() {
	var circle = {
		cor: Math.floor(Math.random() * 4) + 1, // Cores de 1 a 4. 1: azul, 2: amarelo, 3: vermelho, 4: verde
		tempo: Math.floor(Math.random() * 4) + 2, // Tempo de 2 a 5 segundos
		posicaoX: Math.floor(Math.random() * 900) + 50, // Coordenada x da bola de 50 a 950
		posicaoY: Math.floor(Math.random() * 350) + 75 // Coordenada y da bola de 75 a 425
	}
	return circle;
}

function showCircle(circle) {
	stroke(0,0,0);
	if (circle.cor == 1) {
		fill("blue");
		ellipse(circle.posicaoX, circle.posicaoY, 30);
	} else if (circle.cor == 2) {
		fill("yellow");
		ellipse(circle.posicaoX, circle.posicaoY, 30);
	} else if (circle.cor == 3) {
		fill("red");
		ellipse(circle.posicaoX, circle.posicaoY, 30);
	} else {
		fill("green");
		ellipse(circle.posicaoX, circle.posicaoY, 30);
	}
}
