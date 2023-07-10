<?php 
    $base = 2;
    $expoente = 4;
    $result = 0;    

    for($i=0;$i<$expoente;$i++){
        if($result == 0){
            $result = $base;
        }
        else{
            $result = $result * $base;
        }
    }
    echo ($result);

?>