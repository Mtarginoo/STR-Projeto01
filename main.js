function setup() {
	acertou = false;
	media = 0;
	fimDoJogo = false;
	countBolas = 0;
	pontos = 0;
	clicou = false;
	podeApertar = false;
	alive = false;
	pegarTempo1 = false;
	pegarTempoClique = false;
	countMenu = 0;
	fezSorteio = false;
	createCanvas(1000, 512); 
	frameRate(60);
}

function draw() {
	background(200);
	fill(0,0,0);
	noStroke();
	if (keyIsDown(32)) {
		countMenu = 1;
	}
	if (countMenu == 0) {
		initialScreen();	
	} else if (fimDoJogo == true) {
		textSize(50);
		fill(255,255,255);
		text("Média: " + media.toFixed(2) +"ms", 150, 100);
		text("Score: " + pontos, 150, 200);
		text("Pressione Enter para continuar", 150, 300);
		if(keyIsDown(13)){
			countMenu = 0;
			fimDoJogo = false;
			pontos = 0;
			countBolas = 0;
			clicou = false;
			pegarTempo1 = false;
			pegarTempoClique = false;
			podeApertar = false;
			media = false;
			fezSorteio = false;
			alive = false;
			acertou = false;
		}
	} else {
		textSize(32);
		fill(255,255,255);
		text("SCORE: " + pontos, 400, 32);
		if (fezSorteio == false) {
			circleShown = sorteio();
			fezSorteio = true;
		}
		if (pegarTempo1 == false) {
			d1 = new Date();
			n1 = d1.getTime();
			pegarTempo1 = true;
		}
		d2 = new Date();
		n2 = d2.getTime();
		if (n2 - n1 >= circleShown.tempo * 1000) {
			alive = true;
			pegarTempo1 = false;
		}
		if (alive == true) {
			if (pegarTempoClique == false) {
				d3 = new Date();
				n3 = d3.getTime();
				pegarTempoClique = true;
			}
			showCircle(circleShown);
			podeApertar = true;
		}
		if (podeApertar == true) {
			if (keyIsDown(38)) {
				clicou = true;
				if (circleShown.cor == 1) {
					pontos++;
					acertou = true;
				}
			} else if (keyIsDown(40)) {
				clicou = true;
				if (circleShown.cor == 2) {
					pontos++;
					acertou = true;
				}
			} else if (keyIsDown(37)) {
				clicou = true;
				if (circleShown.cor == 3) {
					pontos++;
					acertou = true;
				}
			} else if (keyIsDown(39)) {
				clicou = true;
				if (circleShown.cor == 4) {
					pontos++;
					acertou = true;
				}
			}
			if (clicou == true) {
				clicou = false;
				pegarTempoClique = false;
				countBolas++;
				alive = false;
				fezSorteio = false;
				podeApertar = false;
			}
			if (acertou == true) {
				d4 = new Date();
				n4 = d4.getTime();
				media += (n4 - n3);
				console.log(n4-n3);
				acertou = false;
			}
		}
		if (countBolas == 10) {
			fimDoJogo = true;
			if (pontos != 0) {
				media /= pontos;
			}
		}		
	}
}