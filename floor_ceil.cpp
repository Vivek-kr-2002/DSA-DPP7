const floorCeilRecursive = (root, key, store) => {
  if(root === null){
    return;
  }
  if(root.val === key){
    store.floor = root.val;
    store.ceil = root.val;
  }

  else if(key < root.val){
    store.ceil = root.val;
    floorCeil(root.left, key, store);
  }
  
  else{
    store.floor = root.val;
    floorCeil(root.right, key, store);
  }
}
