
<?php

$k = 1;
for($i=1;$i<=3;$i++){
  for($j=1;$j<=$i;$j++){
  if($i%2 != 0){
  	echo chr($k + 64) . " ";
    $k++;
    }else{
    echo " $k ";
    $k++;
    }
  }
  echo '</br>';
}


?>