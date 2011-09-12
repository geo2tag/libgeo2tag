package ru.spb.osll.web.client.ui.image;

import com.google.gwt.resources.client.ClientBundle;
import com.google.gwt.resources.client.ImageResource;

public interface ResImages extends ClientBundle {
	ImageResource folder();
	
	ImageResource peek();

	ImageResource underConstruction();

	ImageResource testing();

	ImageResource comingSoonLogo();
	
	@Source("noimage.png")
	ImageResource treeLeaf();
}