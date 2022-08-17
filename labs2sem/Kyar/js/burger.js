const iconMenu = document.querySelector('.menu_icon');
if(iconMenu){
    const menuBody = document.querySelector('.navigation');
    iconMenu.addEventListener("click",function(e){
        document.body.classList.toggle('_lock')
        iconMenu.classList.toggle('active');
        menuBody.classList.toggle('active');
    })
}