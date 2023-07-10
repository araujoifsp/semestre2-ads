<?php
    $a = 1; 
    $b = 2; 
    $i; 
    $maior;
    $valor;
    $soma;
    $media;

    for($i=0;$i<10;$i++){
        if($i == 0){
            $maior = rand($a,$b);
            $soma = $maior;
        }
        else{
            $valor = rand($a,$b);;
            if($valor > $maior){
                $maior = $valor;
                $soma = $soma + $valor;
            }
        }
    }

    $media = ($soma/10);
    echo ("Maior: $maior <br>");
    echo ("Soma: $soma <br>");
    echo ("Medio: $media <br>");

?>