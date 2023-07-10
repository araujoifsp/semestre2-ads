<!DOCTYPE html>
<html lang="pt-br">
<head>
	<meta charset="UTF-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
	<title>Exercicio</title>
</head>
<body>
	<?php
		$alt = 1.70;
		$peso = 57;
		$imc = $peso/($alt*$alt);

		if($imc < 18.5){
			echo "Magreza";
		}
		else if($imc >= 18.5 && $imc <= 24.9){
			echo "Saldavel";
		}
		else if($imc >= 25 && $imc <= 29.9){
			echo "Sobrepeso";
		}
		else if($imc >= 30 && $imc <= 34.9){
			echo "Obesidade Grau I";
		}
		else if($imc >= 35 && $imc <= 39.9){
			echo "Obresidade Grau II (Severa)";
		}
		else{
			echo "Obesidade Grau III (Morbida)";
		}
	
	?>
</body>
</html>